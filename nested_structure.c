 #include <stdio.h>
struct Address {
char city[50];
int pin;
};
struct Person {
char name[50];
struct Address addr;
};
int main() {
     struct Person p;
     printf("Enter person name: ");
     scanf("%s", p.name);
     printf("Enter city name: ");
     scanf("%s", p.addr.city);
     printf("Enter pin code: ");
     scanf("%d", &p.addr.pin);
     printf("\nPerson deatils:\n");
     printf("Name: %s\nCity:%s\nPin:%d\n", p.name, p.addr.city, p.addr.pin);
}