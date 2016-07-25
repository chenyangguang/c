 #include <stdio.h> int main()
{
    // 打擂台算法,我囧~
    int i,j,row=0,column=0,max;
    int people[3][4] = {{2,6,9,7},{17,8,-7,98},{32,13,3,99}};
    max = people[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if(people[i][j] > max) {
                max = people[i][j];
                row = i + 1;
                column = j + 1;
            }
        }
    }
    printf("最牛逼打法的是%d号\n第%d行\t第%d列\t这个打手\n", max,row,column);

    return 0;
}
