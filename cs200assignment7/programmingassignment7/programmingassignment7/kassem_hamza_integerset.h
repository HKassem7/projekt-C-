//
//  kassem_hamza_integerset.h
//  programmingassignment7
//
//  Created by Hamza Kassem on 4/8/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef kassem_hamza_integerset_h
#define kassem_hamza_integerset_h

class IntegerSet
{
public:
    IntegerSet()
    {
    }
}

IntegerSet(int[], int);
IntegerSet unionOfSets(const IntegerSet&);

void emptySet();
void inputSet();
void insertElement(int);
void printSet() const

private:
int set[101];
int validEntry(int x) const
{
    return (x >= 0 && x <=100);
}
};

#endif /* kassem_hamza_integerset_h */
