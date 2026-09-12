
        if (arr[i] == key)
            return i; // Return index if found
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[] = {5, 12, 7, 25, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 25;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else