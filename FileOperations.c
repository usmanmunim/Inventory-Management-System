#include "FileOperations.h"

void addDataMenu() {
    int choice;
    printf("\n== ADD DATA MENU ==\n");
    printf("1. Add Product\n");
    printf("2. Add Inventory Item\n");
    printf("3. Add Category\n");
    printf("4. Add Supplier\n");
    printf("5. Add User\n");
    printf("6. Add Transaction\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    clear_input_buffer();

    switch (choice) {
        case 1: {
            Product* products = load_products(PRODUCTS_FILE);
            add_product(&products);
            save_products(PRODUCTS_FILE, products);
            free_product_list(products);
            break;
        }
        case 2: {
            InventoryItem* inventory = load_inventory();
            add_inventory_item(&inventory);
            save_inventory(inventory);
            free_inventory(inventory);
            break;
        }
        case 3: {
            Category* categories = load_categories();
            add_category(&categories);
            save_categories(categories);
            free_categories(categories);
            break;
        }
        case 4: {
            Supplier* suppliers = load_suppliers();
            add_supplier(&suppliers);
            save_suppliers(suppliers);
            free_suppliers(suppliers);
            break;
        }
        case 5: {
            User* users = load_users();
            add_user(&users);
            save_users(users);
            free_users(users);
            break;
        }
        case 6: {
            Transaction* txns = load_transactions();
            add_transaction(&txns);
            save_transactions(txns);
            free_transactions(txns);
            break;
        }
        default: printf("Invalid choice.\n");
    }
}

void updateDataMenu() {
    int choice;
    printf("\n== UPDATE DATA MENU ==\n");
    printf("1. Update Product\n");
    printf("2. Update Inventory Item\n");
    printf("3. Update Category\n");
    printf("4. Update Supplier\n");
    printf("5. Update User\n");
    printf("6. Update Transaction\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    clear_input_buffer();

    switch (choice) {
        case 1: {
            Product* products = load_products(PRODUCTS_FILE);
            update_product(products);
            save_products(PRODUCTS_FILE, products);
            free_product_list(products);
            break;
        }
        case 2: {
            InventoryItem* inventory = load_inventory();
            update_inventory_item(inventory);
            save_inventory(inventory);
            free_inventory(inventory);
            break;
        }
        case 3: {
            Category* categories = load_categories();
            update_category(categories);
            save_categories(categories);
            free_categories(categories);
            break;
        }
        case 4: {
            Supplier* suppliers = load_suppliers();
            update_supplier(suppliers);
            save_suppliers(suppliers);
            free_suppliers(suppliers);
            break;
        }
        case 5: {
            User* users = load_users();
            update_user(users);
            save_users(users);
            free_users(users);
            break;
        }
        case 6: {
            Transaction* txns = load_transactions();
            update_transaction(txns);
            save_transactions(txns);
            free_transactions(txns);
            break;
        }
        default: printf("Invalid choice.\n");
    }
}

void deleteDataMenu() {
    int choice;
    printf("\n== DELETE DATA MENU ==\n");
    printf("1. Delete Product\n");
    printf("2. Delete Inventory Item\n");
    printf("3. Delete Category\n");
    printf("4. Delete Supplier\n");
    printf("5. Delete User\n");
    printf("6. Delete Transaction\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    clear_input_buffer();

    switch (choice) {
        case 1: {
            Product* products = load_products(PRODUCTS_FILE);
            delete_product(&products);
            save_products(PRODUCTS_FILE, products);
            free_product_list(products);
            break;
        }
        case 2: {
            InventoryItem* inventory = load_inventory();
            delete_inventory_item(&inventory);
            save_inventory(inventory);
            free_inventory(inventory);
            break;
        }
        case 3: {
            Category* categories = load_categories();
            delete_category(&categories);
            save_categories(categories);
            free_categories(categories);
            break;
        }
        case 4: {
            Supplier* suppliers = load_suppliers();
            delete_supplier(&suppliers);
            save_suppliers(suppliers);
            free_suppliers(suppliers);
            break;
        }
        case 5: {
            User* users = load_users();
            delete_user(&users);
            save_users(users);
            free_users(users);
            break;
        }
        case 6: {
            Transaction* txns = load_transactions();
            delete_transaction(&txns);
            save_transactions(txns);
            free_transactions(txns);
            break;
        }
        default: printf("Invalid choice.\n");
    }
}

void viewAllData() {
    printf("\n==== ALL SYSTEM DATA ====\n");

    Product* products = load_products(PRODUCTS_FILE);
    InventoryItem* inventory = load_inventory();
    Category* categories = load_categories();
    Supplier* suppliers = load_suppliers();
    User* users = load_users();
    Transaction* txns = load_transactions();

    printf("\n--- Products ---\n");
    view_products(products);

    printf("\n--- Inventory ---\n");
    view_inventory(inventory);

    printf("\n--- Categories ---\n");
    view_categories(categories);

    printf("\n--- Suppliers ---\n");
    view_suppliers(suppliers);

    printf("\n--- Users ---\n");
    view_users(users);

    printf("\n--- Transactions ---\n");
    view_transactions(txns);

    free_product_list(products);
    free_inventory(inventory);
    free_categories(categories);
    free_suppliers(suppliers);
    free_users(users);
    free_transactions(txns);

    printf("\nAll data displayed successfully.\n");
}

void fileOperationsMenu() {
    int choice;
    do {
        printf("\n===== FILE OPERATIONS MENU =====\n");
        printf("1. Add Data\n");
        printf("2. Update Data\n");
        printf("3. Delete Data\n");
        printf("4. View All Data\n");
        printf("0. Exit File Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        clear_input_buffer();

        switch (choice) {
            case 1: addDataMenu(); break;
            case 2: updateDataMenu(); break;
            case 3: deleteDataMenu(); break;
            case 4: viewAllData(); break;
            case 0: printf("Returning to main menu...\n"); break;
            default: printf("Invalid choice.\n");
        }

        if (choice != 0) pause_screen();
    } while (choice != 0);
}
