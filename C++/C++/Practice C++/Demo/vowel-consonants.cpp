// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     string s1;
//     cout<<"Enter the string : ";
//     getline(cin, s1);
//     cout<<s1.length();
//     char low[]={'a','e','i','o','u'};
//     char upper[]={'A','E','I','O','U'};
//     int vowel_count = 0;
//     int consonants_count=0;
//     int space_count=0;
//     for(int i=0;i<s1.length();i++){
//         char ch=s1[i];
//         for(int j=0;j<5;j++){
//             if(s1[i]==low[j]|| s1[i]==upper[j]){
//                 vowel_count++;
//             }
//             else if (ch==' '){
//                 space_count++;
//             }
//             else{
//                 consonants_count= s1.length()-(vowel_count + space_count);
//             }
//         }
        
//     }
//     cout<<"Space Count : "<<space_count<<endl;
//     cout<<"The Vowel's Count in string is : "<<vowel_count<<endl;
//     cout<<"The Consonants Count in string is : "<<consonants_count<<endl;

// }



#include<iostream>
using namespace std;

int main() {
    string s1;
    cout << "Enter the string: ";
    getline(cin, s1);

    int vowel_count = 0;
    int consonant_count = 0;
    int space_count = 0;

    char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};

    for (int i = 0; i < s1.length(); i++) {
        char ch = s1[i];

        // Check for space
        if (ch == ' ') {
            space_count++;
        }

        // Check if it's an alphabet
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            bool is_vowel = false;

            // Check if it’s a vowel
            for (int j = 0; j < 10; j++) {
                if (ch == vowels[j]) {
                    vowel_count++;
                    is_vowel = true;
                    break;
                }
            }

            // If it's a letter and not a vowel → consonant
            if (!is_vowel) {
                consonant_count++;
            }
        }
    }

    cout << "Space Count: " << space_count << endl;
    cout << "Vowel Count: " << vowel_count << endl;
    cout << "Consonant Count: " << consonant_count << endl;

    return 0;
}
