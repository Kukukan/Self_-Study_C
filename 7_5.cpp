#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _student {
    char* Name;
    int Id;
    float score;
    struct _student* next;
} Student;

// Function to check if a student ID already exists in the linked list
int isDuplicateID(const Student* head, int id) {
    const Student* current = head;
    while (current != NULL) {
        if (current->Id == id) {
            return 1; // ID exists
        }
        current = current->next;
    }
    return 0; // ID does not exist
}

// Function to get the tail of the linked list
Student* getTail(Student* head) {
    if (head == NULL) {
        return NULL;
    }

    while (head->next != NULL) {
        head = head->next;
    }
    return head;
}

// Function to partition the linked list and return the pivot element
Student* partition(Student* head, Student* end, Student** newHead, Student** newEnd) {
    Student* pivot = end;
    Student* prev = NULL, * cur = head, * tail = pivot;

    // Partition the linked list
    while (cur != pivot) {
        if (cur->score > pivot->score) {
            if ((*newHead) == NULL)
                (*newHead) = cur;

            prev = cur;
            cur = cur->next;
        }
        else {
            if (prev)
                prev->next = cur->next;
            Student* tmp = cur->next;
            cur->next = NULL;
            tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }

    if ((*newHead) == NULL)
        (*newHead) = pivot;

    (*newEnd) = tail;

    return pivot;
}

// Recursive function to perform QuickSort on the linked list
Student* quickSortRec(Student* head, Student* end) {
    if (!head || head == end)
        return head;

    Student* newHead = NULL, * newEnd = NULL;

    // Partition the linked list and get the pivot
    Student* pivot = partition(head, end, &newHead, &newEnd);

    // If pivot is the smallest element, no need to recur for the left part
    if (newHead != pivot) {
        Student* tmp = newHead;
        while (tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = NULL;

        newHead = quickSortRec(newHead, tmp);

        tmp = getTail(newHead);
        tmp->next = pivot;
    }

    // Recur for the right part
    pivot->next = quickSortRec(pivot->next, newEnd);

    return newHead;
}

// Function to sort the linked list using QuickSort
void quickSort(Student** headRef) {
    (*headRef) = quickSortRec(*headRef, getTail(*headRef));
}

// Function to display the linked list
void displayList(const Student* head) {
    const Student* current = head;

    printf("ID\tName\tScore\n");
    while (current != NULL) {
        printf("%d\t%s\t%.2f\n", current->Id, current->Name, current->score);
        current = current->next;
    }
}

// Function to add a student to the linked list
void addStudent(Student** head, int id, const char* name, float score) {
    if (isDuplicateID(*head, id)) {
        printf("Error: Student with ID %d already exists.\n", id);
        return;
    }

    Student* newStudent = (Student*)malloc(sizeof(Student));
    if (newStudent == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    newStudent->Id = id;
    newStudent->Name = strdup(name);
    newStudent->score = score;
    newStudent->next = NULL;

    if (*head == NULL) {
        *head = newStudent;
    } else {
        Student* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newStudent;
    }
}

// Function to remove all students with a score less than 5
void removeLowScores(Student** head) {
    while (*head != NULL && (*head)->score < 5) {
        Student* temp = *head;
        *head = (*head)->next;
        free(temp->Name);
        free(temp);
    }

    Student* current = *head;
    while (current != NULL && current->next != NULL) {
        if (current->next->score < 5) {
            Student* temp = current->next;
            current->next = current->next->next;
            free(temp->Name);
            free(temp);
        } else {
            current = current->next;
        }
    }
}

// Function to free the memory used by the linked list
void freeList(Student* head) {
    while (head != NULL) {
        Student* temp = head;
        head = head->next;
        free(temp->Name);
        free(temp);
    }
}

int main() {
    Student* students = NULL;

    int id;
    char name[50];
    float score;

    // Input student information until ID is equal to zero
    while (1) {
        printf("Enter student information (ID Name Score), or enter 0 to finish:\n");
        printf("Enter ID: ");
        scanf("%d", &id);

        if (id == 0) {
            break;
        }

        while (isDuplicateID(students, id)) {
            printf("Error: Student with ID %d already exists.\n", id);
            printf("Enter ID: ");
            scanf("%d", &id);
        }

        printf("Enter Name: ");
        scanf("%s", name);

        printf("Enter Score (0-10): ");
        scanf("%f", &score);

        while (score < 0 || score > 10) {
            printf("Error: Score must be in the range 0 to 10.\n");
            printf("Enter Score (0-10): ");
            scanf("%f", &score);
        }

        addStudent(&students, id, name, score);
    }

    // Sort the linked list using QuickSort
    quickSort(&students);

    // Display the sorted list
    printf("\nSorted Student List:\n");
    displayList(students);

    // Remove students with scores less than 5
    removeLowScores(&students);

    // Display the list after removing low scores
    printf("\nStudent List after Removing Low Scores:\n");
    displayList(students);

    // Free memory for students
    freeList(students);

    return 0;
}
