#include "my.h"

int main(void)
{
    char buffer[1024];
    int bytes_read;
    int len;
    
    // Test initial
    my_putchar('A');
    my_putchar('\n');
    
    my_putstr("Hello, World!");
    my_putchar('\n');
    
    // Test de my_strlen
    len = my_strlen("Hello, World!");
    my_putstr("Longueur de 'Hello, World!': ");
    my_putchar(len / 10 + '0');  // Dizaine
    my_putchar(len % 10 + '0');  // Unité
    my_putchar('\n');
    
    // Demander à l'utilisateur d'entrer une chaîne
    my_putstr("Entrez une chaine de caracteres: ");
    
    // Lire l'entrée utilisateur
    bytes_read = read(0, buffer, sizeof(buffer) - 1);
    
    if (bytes_read > 0)
    {
        // Retirer le '\n' final et ajouter '\0'
        if (buffer[bytes_read - 1] == '\n')
            buffer[bytes_read - 1] = '\0';
        else
            buffer[bytes_read] = '\0';
        
        // Afficher ce que l'utilisateur a entré
        my_putstr("Vous avez entre: ");
        my_putstr(buffer);
        my_putchar('\n');
        
        // Afficher la longueur
        len = my_strlen(buffer);
        my_putstr("Longueur: ");
        if (len >= 10)
            my_putchar(len / 10 + '0');
        my_putchar(len % 10 + '0');
        my_putchar('\n');
    }
    
    return 0;
}