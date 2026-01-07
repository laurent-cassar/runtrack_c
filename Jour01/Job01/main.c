#include "my.h"

int main(void)
{
    char buffer[1024];
    int bytes_read;
    
    // Test initial
    my_putchar('A');
    my_putchar('\n');
    
    my_putstr("Hello, World!");
    my_putchar('\n');
    
    // Demander à l'utilisateur d'entrer une chaîne
    my_putstr("Entrez une chaine de caracteres: ");
    
    // Lire l'entrée utilisateur
    bytes_read = read(0, buffer, sizeof(buffer) - 1);
    
    if (bytes_read > 0)
    {
        // Ajouter le caractère de fin de chaîne
        buffer[bytes_read] = '\0';
        
        // Afficher ce que l'utilisateur a entré
        my_putstr("Vous avez entre: ");
        my_putstr(buffer);
    }
    
    return 0;
}