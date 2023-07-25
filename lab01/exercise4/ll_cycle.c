// Copyright 2023 10X Engineers JUNAID
#include <stddef.h>
#include "/home/user3/C Language/su21-lab-starter/lab01/exercise4/ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
     node *fap = head;
     node *slp = head;


while ( fap != NULL && fap->next != NULL && fap->next->next != NULL ) {
     fap = fap->next->next;
     slp = slp->next;

     if  (fap == slp ) {
        return 1;
     }
  }
return 0;
}

