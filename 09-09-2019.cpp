
// Big O notation

/*

1.
    a) 1
    b) n

2.
    a) 35n
    b) 2^n

3.
    a) x^4
    b) x^5
4.
    a) log(n^2)
    b) log(n)

5.
    a) n!
    b) 2000n^5

5.
    a) n•log(n)
    b) log(log(n))

6.
    a) n•log(n)
    b) log(log(n))
7.
    a) 1 + 2n + 4n^2 + n^5
    b) 128n^3 + 77n^2 + n + 35

*/




// Code examples

funct0()
{
    for(int i = 0; i < 100; i)
    {
        cout << i << endl;
    }
}

funct1()
{
    for (size_t i = 0; i < 10; i++) {
        for (size_t j = 0; j < 20; j++) {
            /* code goes here*/
        }

        for (size_t j = 0; j < 20; j++) {
            /* and more here */
        }
        print(stuff);
    }
}

funct2(int n)
{
    for (size_t i = 0; i < n; i++) {
        cout << n << endl;
        funct(n-1);
    }
}

funct3(BST<P*> &k, BST<P*> &m)
{
    ofstream mStream;
    mStream.open("m.txt");
    serialize(m.root, mStream);
    mStream.close();

    ofstream kStream;
    kStream.open("k.txt");
    serialize(k.root, kStream);
    kStream.close();
}

funct4(double myArray[], int size)
{
    for(int ol = 0; ol < size; ++ol)
    {
        int cN = myArray[ol];
        int il = ol-1;

        while((il > -1) && (myArray[il] > cN))
        {
            myArray[il+1] = myArray[il--];
        }
        myArray[il+1] = cN;
    }
}
