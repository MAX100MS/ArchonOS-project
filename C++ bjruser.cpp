#include <cctype>
#include <iostream>
#include <string>

std::string toLower(std::string texte) {
    for (char& c : texte) {
        c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    }
    return texte;
}

int main(){
    std::string user;
    std::cout<<"ConstellarOS Setup config"<<std::endl;
    std::cout<<"Veuillez entrez le nom d'utilisateur: ";
    std::cin>>user;

    std::cout<<"Vous voulez utiliser le nom: "<<user<<std::cout<<" comme nom d'uilisateur?\n";
    std::cin>>S;
    while (toLower(S)=="non"){
        std::cout<<"Veuillez entrez le nom d'utilisateur: ";
        std::cin>>user;

        std::cout<<"Vous voulez utiliser le nom: "<<user<<std::cout<<" comme nom d'uilisateur?\n";
        std::cin>>S;
    }
    if (toLower(S)=="oui")
    return 0;
}
