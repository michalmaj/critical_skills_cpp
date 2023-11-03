#include <iostream>

// Global variables
const int MAX_SPECIALIZATION{20};
const int MAX_QUEUE{5};

std::string names[MAX_SPECIALIZATION+1][MAX_QUEUE+1];
int status[MAX_SPECIALIZATION+1][MAX_QUEUE+1]; // 0 regular, 1 urgent
int queue_length[MAX_SPECIALIZATION+1]; // for each specialization: how man patients so far

int menu()
{
    std::cout << "What do you want to do:\n";
    std::cout << "1. Add a patient.\n";
    std::cout << "2. Print patients.\n";
    std::cout << "3. Get next patient.\n";
    std::cout << "4. Exit the program.\n";
    int choice;
    std::cin >> choice;
    return choice;

}

// Move each patient to the left. E.g., if patients is position 5, it will be in 4
// Help in removing patient
void shift_left(int spec, std::string names_sp[], int status_sp[]){
    int len = queue_length[spec];
    for(int i = 1; i < len; ++i){
        names_sp[i - 1] = names_sp[i];
        status_sp[i - 1] = status_sp[i];
    }
    queue_length[spec]--;
}

// Move each patient to the right. E.g.,  if patient in position 5, it will be in 6
// Help in adding patient
void shift_right(int spec, std::string names_sp[], int status_sp[]){
    int len = queue_length[spec];
    for(int i = len - 1; i >=0; --i){ // critical to start from END
        names_sp[i + 1] = names_sp[i];
        status_sp[i + 1] = status_sp[i];
    }
    queue_length[spec]++;
}

bool add_patient(){
    int spec;
    std::string name;
    int st;

    std::cout << "Enter specialization, name, status: ";
    std::cin >> spec >> name >> st;

    int pos = queue_length[spec];
    if(pos >= MAX_QUEUE){
        std::cout << "Sorry we can't add more patients for this specialization\n";
        return false;
    }

    if(st == 0) { // regular, add to the end
        names[spec][pos] = name;
        status[spec][pos] = st;
        queue_length[spec]++;
    }
    else{
        // Urgent, add th begin. Shift, then add
        shift_right(spec, names[spec], status[spec]);
        names[spec][0] = name;
        status[spec][0] = st;
    }

    return true;
}

void print_patient(int spec, std::string names_sp[], int status_sp[]){
    int len = queue_length[spec];
    if(len == 0)
        return;

    std::cout << "There are " << len << " patients is specialization " << spec << "\n";
    for(int i = 0; i < len; ++i){
        std::cout << names_sp[i] << " ";
        if(status_sp[i])
            std::cout << "urgent\n";
        else
            std::cout << "regular\n";
    }
    std::cout << "\n";
}

void print_patients(){
    std::cout << "********************************\n";
    for(int spec = 0; spec < MAX_SPECIALIZATION; ++spec)
        print_patient(spec, names[spec], status[spec]);
}

void get_next_patients(){
    int spec;
    std::cout << "Enter specialization: ";
    std::cin >> spec;

    int len = queue_length[spec];

    if(len == 0){
        std::cout << "No patients at the moment. Have rest, Dr\n";
        return;
    }

    // Let patient goes to DR
    std::cout << names[spec][0] << " please go with the Dr\n";

    // delete the patient in position 0
    shift_left(spec, names[spec], status[spec]);
}

void hospital_system(){
    while(true){
        int choice = menu();

        if(choice == 1)
            add_patient();
        else if(choice == 2)
            print_patients();
        else if(choice == 3)
            get_next_patients();
        else
            break;
    }
}
int main(){
    hospital_system();

    return 0;
}