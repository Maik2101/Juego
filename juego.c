#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   
  char nbre[50];
    int hp = 200;
    int arma, danoarm;
    int opSitua1, opSitua2, Situa1, Situa2, Situa3, Situa4, Situa5;
    int premo;
    premo = 100;
    printf("\n\nIngrese el nombre de su héroe o heroína:\n\n ");
    scanf("%s", nbre);
    printf("\n¡Tu heroe o heroina es %s!\n", nbre);

    printf("\nElija un arma:\n");
    printf("\n\n1. Hacha (daño: 50)\n");
    printf("\n\n2. Espada (daño: 30)\n");
    printf("\n\n3. Arco (daño: 20)\n");
    scanf("%d", &arma);

      switch (arma) {
        case 1:
            danoarm = 50;
            break;
        case 2:
            danoarm = 40;
            break;
        case 3:
            danoarm = 30;
            break;
        default:
            printf("Opción inválida. Se usará el hacha como arma.\n");
            arma = 50;
            arma = 1;
            break;
    }

    // situaciones aleatorias
     srand(time(NULL));
    Situa1 = rand() % 5 + 1;
    Situa2 = rand() % 5 + 1;
    Situa3 = rand() % 5 + 1;
    Situa4 = rand() % 5 + 1;
    Situa5 = rand() % 5 + 1;
     printf("\nlas situaciones son: %d\n",Situa1);
    printf("\nlas situaciones son: %d\n",Situa2);


switch (Situa1){
    case 1:
    printf("\n\nTe encuentras con un Golem de Piedra gigante que bloquea el camino.\n");
    printf("\n\n¿Deseas pelear o huir?\n");
    printf("\n\n1. Pelear\n");
    printf("\n\n2. Huir\n");
    scanf("%d", &opSitua1);

    if (opSitua1 == 1) {
        printf("\n\nAtacas  y derrotas al Golem con tu%s!\n\n ", arma == 1 ? "hacha" : arma == 2 ? "espada" : "arco");

        printf("\n\n ¡Logras dañarlo y derrotarlo!\n");
        hp -= 10; // pierde 10 HP en el proceso
    } else if (opSitua1 == 2)
    {
        printf("\n\nDecides huir del Golem, pero en el proceso recibes un poco de daño, pierdes 5 HP.\n");
        hp -= 5; // pierde 5 HP al huir
    }
    break;
    case 2 :
    printf("\n\nTe toparás con un grupo de Kobolds salvajes. ¿Cómo procederás?\n");
printf("\n\n1. Atacar\n");
printf("\n\n2. Negociar\n");
scanf("%d", &opSitua1);

if (opSitua1 == 1) {
    printf("\n\nDecides atacar a los Kobolds con tu%s!\n\n ", arma == 1 ? "hacha" : arma == 2 ? "espada" : "arco");
  printf("Obtienes 15 monedas de plata");
  premo += 15;
}else if (opSitua1 == 2){
    printf("\n\nIntentas negociar con los Kobolds, pero estos no parecen entender tus palabras y deciden atacarte. Pierdes 30 HP en la pelea.\n");
    hp -= 8; // pierde 30 HP al intentar negociar con los Kobolds

} 
break;
case 3:
  printf("\n\nTe encuentras a un joven confeccionista. Que haces\n");
  printf("\n\n1. Pedir que te algo de ropa\n");
  printf("\n\n2. Nada\n");
  scanf("%d",&opSitua1);
  if(opSitua1 == 1){
          printf("El joven confeccionista tiene estas opciones:\n");
            printf("1. Abrigo (+50 HP) - 15 monedas\n");
            printf("2. Pantalon (+10 daño) -25 monedas\n");
            printf("3. Zapatos (+20 daño al arma) - 10 monedas\n");
            printf("Elige una opción: ");
            scanf("%d", &opSitua2);
            switch (opSitua2){
                case 1:
                if (premo >= 30){
                    printf("Compraste un abrigo. +50 HP\n");
                        hp += 25;
                        premo -= 15;
                } else {
                    printf("No tienes suficientes monedas.\n");
                }
                break;
            case 2:
            if (premo >=25){
                 printf("Compraste un pantalon\n");
                        hp += 10;
                        premo -= 25;
            } else {
                        printf("No tienes suficientes monedas.\n");
                    }
                    break;
                    case 3:
                    if (premo >= 10) {
                        printf("Compraste unos zapatos\n");
                       hp += 10;
                        premo -= 10;
                    } else {
                        printf("No tienes suficientes monedas.\n");
                    }
                    break;
        default:
                    printf("Opción inválida.\n");
                    break;

            }
  }else if (opSitua1 == 2){
    printf("El  joven confeccionista te ofrece:\n");
            printf("1. Abrigo (+50 HP) - 5 monedas\n");
            printf("2. Pantalon roto (-10 daño) - 10 monedas\n");
            printf("3. Zapatos (+10 daño al arma) - 8 monedas\n");
            printf("Elige una opción: ");
            scanf("%d", &opSitua2);
            switch (opSitua2) {
                case 2:
                if (premo >= 25) {
                    printf("Compraste un abrigo. +10 de daño\n");
                    hp += 10;
                    premo -= 25;
                } else {
                    printf("No tienes suficientes monedas.\n");
                }
                break;
            case 3:
                if (premo >= 10) {
                    printf("Compraste una poción de maná. +20 de daño al arma\n");
                    hp += 20;
                    premo -= 10;
                } else {
                    printf("No tienes suficientes monedas.\n");
                }
                break;
            default:
                printf("Opción inválida.\n");
                break;
        }

  } else if (opSitua1 == 2) {
        printf("El comerciante no está interesado en comprar nada.\n");
    } else if (opSitua1 == 3) {
        printf("No hacer nada.\n");
    } else {
        printf("Opción inválida.\n");
    }
      break;
    case 4:
    printf("\nTe encuentras en un bosque oscuro y encuentras una bruja.\n");
    printf("¿Qué quieres hacer?\n");
    printf("1. Hacer trueque\n");
    printf("2. Correr y pedir ayuda\n");
    scanf("%d", &opSitua1);
    if (opSitua1 == 1) {
        if (premo >= 25) {
            printf("La bruja te ayuda a recuperar hp.\n");
            hp += 25;
            premo -= 25;
        } else {
            printf("No tienes suficientes monedas.\n");
        }
    } else if (opSitua1 == 2) {
        printf("Sin pensarlos atacas a la bruja, pero ella utiliza su magia negra \n");
        printf("Pierdes 20 hp\n");
        hp -= 20;
         } else {
        printf("Opción inválida.\n");
    }
    break;
case 5:
    printf("\nTe encuentras con una caja.\n");
    printf("¿Qué quieres hacer?\n");
    printf("1. Recojerlo y ver que esta adentro\n");
    printf("2. No recojerlo y seguir con el camino\n");
    scanf("%d", &opSitua1);
    if (opSitua1 == 1) {
        printf("Obtienes 30 monedas de plata.\n");
        premo += 30;
    } else if (opSitua1 == 2) {
        printf("No tomas la caja.\n");
    } else {
        printf("Opción inválida.\n");
    }
    break;
default:
 printf("No paso nada \n");
    break;
}

// Imprimir la vida y las monedas del héroe o heroína
printf("\n%s tiene %d puntos de vida y %d monedas.\n", nbre, hp, premo);

switch(Situa1){
    case 1:
    printf("\n\nTe encuentras con un Golem de Piedra gigante que bloquea el camino.\n");
    printf("\n\n¿Deseas pelear o huir?\n");
    printf("\n\n1. Pelear\n");
    printf("\n\n2. Huir\n");
    scanf("%d", &opSitua1);

    if (opSitua1 == 1) {
        printf("\n\nAtacas  y derrotas al Golem con tu%s!\n\n ", arma == 1 ? "hacha" : arma == 2 ? "espada" : "arco");

        printf("\n\n ¡Logras dañarlo y derrotarlo!\n");
        hp -= 10; // pierde 10 HP en el proceso
    } else if (opSitua1 == 2)
    {
        printf("\n\nDecides huir del Golem, pero en el proceso recibes un poco de daño, pierdes 5 HP.\n");
        hp -= 5; // pierde 5 HP al huir
    }
    break;
    case 2 :
    printf("\n\nTe toparás con un grupo de Kobolds salvajes. ¿Cómo procederás?\n");
printf("\n\n1. Atacar\n");
printf("\n\n2. Negociar\n");
scanf("%d", &opSitua1);

if (opSitua1 == 1) {
    printf("\n\nDecides atacar a los Kobolds con tu%s!\n\n ", arma == 1 ? "hacha" : arma == 2 ? "espada" : "arco");
  printf("Obtienes 15 monedas de plata");
  premo += 15;
}else if (opSitua1 == 2){
    printf("\n\nIntentas negociar con los Kobolds, pero estos no parecen entender tus palabras y deciden atacarte. Pierdes 30 HP en la pelea.\n");
    hp -= 8; // pierde 30 HP al intentar negociar con los Kobolds

} 
break;
case 3:
  printf("\n\nTe encuentras a un joven confeccionista. Que haces\n");
  printf("\n\n1. Pedir que te algo de ropa\n");
  printf("\n\n2. Nada\n");
  scanf("%d",&opSitua1);
  if(opSitua1 == 1){
          printf("El joven confeccionista tiene estas opciones:\n");
            printf("1. Abrigo (+50 HP) - 15 monedas\n");
            printf("2. Pantalon (+10 daño) -25 monedas\n");
            printf("3. Zapatos (+20 daño al arma) - 10 monedas\n");
            printf("Elige una opción: ");
            scanf("%d", &opSitua2);
switch (opSitua2){
case 1:
                if (premo >= 30){
                    printf("Compraste un abrigo. +50 HP\n");
                        hp += 25;
                        premo -= 15;
                } else {
                    printf("No tienes suficientes monedas.\n");
                }
                break;
            case 2:
            if (premo >=25){
                 printf("Compraste un pantalon\n");
                        hp += 10;
                        premo -= 25;
            } else {
                        printf("No tienes suficientes monedas.\n");
                    }
                    break;
                    case 3:
                    if (premo >= 10) {
                        printf("Compraste unos zapatos\n");
                       hp += 10;
                        premo -= 10;
                    } else {
                        printf("No tienes suficientes monedas.\n");
                    }
                    break;
        default:
                    printf("Opción inválida.\n");
                    break;

            }
  }else if (opSitua1 == 2){
    printf("El  joven confeccionista te ofrece:\n");
            printf("1. Abrigo (+50 HP) - 5 monedas\n");
            printf("2. Pantalon roto (-10 daño) - 10 monedas\n");
            printf("3. Zapatos (+10 daño al arma) - 8 monedas\n");
            printf("Elige una opción: ");
            scanf("%d", &opSitua2);
            switch (opSitua2) {
                case 2:
                if (premo >= 25) {
                    printf("Compraste un abrigo. +10 de daño\n");
                    hp += 10;
                    premo -= 25;
                } else {
                    printf("No tienes suficientes monedas.\n");
                }
                break;
            case 3:
                if (premo >= 10) {
                    printf("Compraste una poción de maná. +20 de daño al arma\n");
                    hp += 20;
                    premo -= 10;
                } else {
                    printf("No tienes suficientes monedas.\n");
                }
                break;
            default:
                printf("Opción inválida.\n");
                break;
        }

  } else if (opSitua1 == 2) {
        printf("El comerciante no está interesado en comprar nada.\n");
    } else if (opSitua1 == 3) {
        printf("No hacer nada.\n");
    } else {
        printf("Opción inválida.\n");
    }
      break;
    case 4:
    printf("\nTe encuentras en un bosque oscuro y encuentras una bruja.\n");
    printf("¿Qué quieres hacer?\n");
    printf("1. Hacer trueque\n");
    printf("2. Correr y pedir ayuda\n");
    scanf("%d", &opSitua1);
    if (opSitua1 == 1) {
        if (premo >= 25) {
            printf("La bruja te ayuda a recuperar hp.\n");
            hp += 25;
            premo -= 25;
        } else {
            printf("No tienes suficientes monedas.\n");
        }
    } else if (opSitua1 == 2) {
        printf("Sin pensarlos atacas a la bruja, pero ella utiliza su magia negra \n");
        printf("Pierdes 20 hp\n");
        hp -= 20;
         } else {
        printf("Opción inválida.\n");
    }
    break;
case 5:
    printf("\nTe encuentras con una caja.\n");
    printf("¿Qué quieres hacer?\n");
    printf("1. Recojerlo y ver que esta adentro\n");
    printf("2. No recojerlo y seguir con el camino\n");
    scanf("%d", &opSitua1);
    if (opSitua1 == 1) {
        printf("Obtienes 30 monedas de plata.\n");
        premo += 30;
    } else if (opSitua1 == 2) {
        printf("No tomas la caja.\n");
    } else {
        printf("Opción inválida.\n");
    }
    break;
default:
 printf("No paso nada \n");
    break;
}
// hp  y las monedas de la persona de heroe o heroina
printf("\n%s tiene %d puntos de vida y %d monedas.\n", nbre, hp, premo);
printf("\n*Fin del juego*\n");


return 0;
  

}