if(number % i == 0) // 建議加上大括號，增加可讀性。
    for(int j = 2; j<=i; j++)
    { 
        if(i % j == 0 && i != j)
            break;

        if(i == j)
        {
            if(k != 1)
                cout << " ";
            cout << i;
            k++; 
        }
    }
