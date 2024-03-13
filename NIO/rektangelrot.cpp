//I translated this document from python to C++

#include <iostream>
#include <vector>
#include <string>



/*calculate circumferance of one of the rectangles (in the context of two rectangles)
c means current, o means other*/
float calculate(int cx1,int cy1,int cx2,int cy2,int ox1,int oy1,int ox2, int oy2) {
    float len = 0;
    int x = cx1;
    int y = cy1;
    for (int j = 0; j<(cx2-cx1); j++) { //run through x coordinate
        if (x == ox1 && (oy1 < y && y < oy2)) { //moving into other rectangle
            x += 1;
        } else if ((ox1 <= x && x < ox2) && (y==oy1 || y==oy2)){ //moving along edge
            x += 1;
            len += 0.5; //both rectangles will count this, so 0.5 * 2 = 1
        } else { //incrementing x after works for all other cases (inside, outside, going out)
            if ((!(ox1<x && x<ox2)) || (!(oy1<y && y<oy2))) { //check if insie other rectangle
                len += 1;
            }
            x += 1;
        }
    }

    for (int j = 0; j<(cy2-cy1); j++) { // run through y coordinate
        if (y == oy1 && (ox1 < x && x < ox2)) {
            y += 1;
        } else if ((oy1 <= y && y < oy2) && (x==ox1 || x==ox2)){
            y += 1;
            len += 0.5;
        } else {
            if ((!(ox1<x && x<ox2)) || (!(oy1<y && y<oy2))) {
                len += 1;
            }
            y += 1;
        }
    }

    // reset back to the beginniing point.
    x = cx1;
    y = cy1;

    //now do y first and then x to get the remaining sides
    for (int j = 0; j<(cy2-cy1); j++) { // run through y coordinate
        if (y == oy1 && (ox1 < x && x < ox2)) {
            y += 1;
        } else if ((oy1 <= y && y < oy2) && (x==ox1 || x==ox2)){
            y += 1;
            len += 0.5;
        } else {
            if ((!(ox1<x && x<ox2)) || (!(oy1<y && y<oy2))) {
                len += 1;
            }
            y += 1;
        }
    }

    for (int j = 0; j<(cx2-cx1); j++) { //run through x coordinate
        if (x == ox1 && (oy1 < y && y < oy2)) { //moving into other rectangle
            x += 1;
        } else if ((ox1 <= x && x < ox2) && (y==oy1 || y==oy2)){ //moving along edge
            x += 1;
            len += 0.5; //both rectangles will count this, so 0.5 * 2 = 1
        } else { //incrementing x after works for all other cases (inside, outside, going out)
            if ((!(ox1<x && x<ox2)) || (!(oy1<y && y<oy2))) { //check if insie other rectangle
                len += 1;
            }
            x += 1;
        }
    }

    return len;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> lenvector;

    for (int i=0; i<N; i++) {
        int r1x1;
        int r1y1;
        int r1x2;
        int r1y2;
        int r2x1;
        int r2y1;
        int r2x2;
        int r2y2;
        std::cin >> r1x1 >> r1y1 >> r1x2 >> r1y2;
        std::cin >> r2x1 >> r2y1 >> r2x2 >> r2y2;

        float len = 0;
        len += calculate(r1x1, r1y1, r1x2, r1y2, r2x1, r2y1, r2x2, r2y2);
        len += calculate(r2x1, r2y1, r2x2, r2y2, r1x1, r1y1, r1x2, r1y2);
        lenvector.push_back(static_cast<int>(len));
    }

    for(int i; i<lenvector.size(); i++) {
        std::cout << lenvector[i] << "\n";
    }
}