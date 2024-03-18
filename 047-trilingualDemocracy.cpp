//<7 kyu>

// Trilingual democracy
// Switzerland has four official languages: German, French, Italian, and Romansh.1

// When native speakers of one or more of these languages meet, they follow certain regulations to choose a language for the group.2 Here are the rules for groups of exactly three3 people:4

// When all three are native speakers of the same language, it also becomes their group's language.5a

// When two are native speakers of the same language, but the third person speaks a different language, all three will converse in the minority language.5b

// When native speakers of three different languages meet, they eschew these three languages and instead use the remaining of the four official languages.5c

// The languages are encoded by the letters D for Deutsch, F for Français, I for Italiano, and K for Rumantsch.6

// Your task is to write a function that takes a list of three languages and returns the language the group should use.7 8

// Examples:9

// The language for a group of three native French speakers is French: FFF → F

// A group of two native Italian speakers and a Romansh speaker converses in Romansh: IIK → K

// When three people meet whose native languages are German, French, and Romansh, the group language is Italian: DFK → I

#include <string>
using namespace std;

char trilingual_democracy(const string& group) {
    int count_D = 0, count_F = 0, count_I = 0, count_K = 0;

    for (char lang : group) {
        switch (lang) {
            case 'D':
                count_D++;
                break;
            case 'F':
                count_F++;
                break;
            case 'I':
                count_I++;
                break;
            case 'K':
                count_K++;
                break;
        }
    }

    if (count_D == 3 || count_F == 3 || count_I == 3 || count_K == 3) {
        return (count_D == 3) ? 'D' : (count_F == 3) ? 'F' : (count_I == 3) ? 'I' : 'K';
    } else if (count_I == 2 && count_K == 1) {
        return 'K';
    } else if (count_I == 2 && count_D == 1) {
        return 'D';
    } else if (count_I == 2 && count_F == 1) {
        return 'F';
    } else if (count_K == 2 && count_D == 1) {
        return 'D';
    } else if (count_K== 2 && count_I== 1) {
        return 'I';
    } else if (count_K== 2 && count_F== 1) {
        return 'F'; 
    } else if (count_D== 2 && count_F== 1) {
        return 'F';
    } else if (count_D== 2 && count_I== 1) {
        return 'I';
    } else if (count_D== 2 && count_K== 1) {
        return 'K';
    } else if (count_F== 2 && count_D== 1) {
        return 'D';
    } else if (count_F== 2 && count_I== 1) {
        return 'I';
    } else if (count_F== 2 && count_K== 1) {
        return 'K';
    } else {
        return (count_D == 0) ? 'D' : (count_F == 0) ? 'F' : (count_I == 0) ? 'I' : 'K';
    }
}