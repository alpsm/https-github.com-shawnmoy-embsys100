#include <assert.h>
#include "stack.h"

int main(){

    int resultA;
    int resultB;
    int evalInt1;
    int evalInt2;
    int evalInt3;   
    int evalInt4;
    int evalInt5;
    int evalInt6;
  
 //*****Test1: Retrieve item from an empty queue*****
    // Arrange:
    
    evalInt1=55;
    qAdvance();
    
    // Act:
    resultA=getQ(&evalInt1);
      
    // Assert:
    assert(-1==resultA);
    assert(55!=evalInt1);
     
 //*****Test2: Successfully retrieve an item from the queue*****
    // Arrange:
    
    evalInt1=55;
    
    qAdvance();
    
    // Act:
    resultA=putQ(10);
    resultB=getQ(&evalInt1);
    
    // Assert:
    assert(0==resultA);
    assert(0==resultB);
    assert(55==evalInt1);
   
 //*****Test3: Fill queue, then get all items*****
    // Arrange:
    evalInt1=55;
    evalInt2=56;
    evalInt3=57;
 
    qAdvance();
    
    // Act:
    putQ(10);
    putQ(11);
    putQ(12);                                    
    
    // Assert:
    assert(0==getQ(&evalInt3));
    assert(57==evalInt3);

    assert(0==getQ(&evalInt2));
    assert(56==evalInt2);

    assert(0==getQ(&evalInt1));
    assert(55==evalInt1);

//*****Test4: Fill queue, then put one more item, should fail*****
   
    // Arrange:
    evalInt1=55;
    evalInt2=56;
    evalInt3=57;
    
    qAdvance();
    
    // Act:
    putQ(10);
    putQ(11);
    putQ(12);
    
    // Assert:
    assert(-1==putQ(58));

    assert(0==getQ(&evalInt3));
    assert(57==evalInt3);

    assert(0==getQ(&evalInt2));
    assert(56==evalInt2);

    assert(0==getQ(&evalInt1));
    assert(55==evalInt1);

//*****Test5: Fill queue, retrieve one item, then add item, then retieve all*****
    // Arrange:
    evalInt1=100;
    evalInt2=101;
    evalInt3=102;
    evalInt4=103;
   
    qAdvance();
    
    // Act:
    putQ(10);
    putQ(11);
    putQ(12);
    
    // Assert:
    assert(0==getQ(&evalInt3));
    assert(102==evalInt3);

    assert(0==putQ(13));

    assert(0==getQ(&evalInt2));
    assert(101==evalInt2);

    assert(0==getQ(&evalInt1));
    assert(100==evalInt1);

    assert(0==getQ(&evalInt4));
    assert(103==evalInt4);

//***** Test6: Fill queue and retrieve all items twice*****
    // Arrange:
     evalInt1=10;
     evalInt2=11;
     evalInt3=12;
     evalInt4=13;
     evalInt5=14;
     evalInt6=15;
         
     qAdvance();
    
    // Act:
    putQ(10);
    putQ(11);
    putQ(12);
    
    // Assert:
    assert(0==getQ(&evalInt3));
    assert(12==evalInt3);

    assert(0==getQ(&evalInt2));
    assert(11==evalInt2);

    assert(0==getQ(&evalInt1));
    assert(10==evalInt1);

    assert(0==putQ(13));
    assert(0==putQ(14));
    assert(0==putQ(15));
    
    assert(-1==putQ(16));

    assert(0==getQ(&evalInt6));
    assert(15==evalInt6);
   
    assert(0==getQ(&evalInt5));
    assert(14==evalInt5);

    assert(0==getQ(&evalInt4));
    assert(13==evalInt4);

    return 0;
}



