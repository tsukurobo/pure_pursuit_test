#include "PurePursuit.h"
#include <iostream>

using namespace std;

int main()
{
    point target_coordinates[] = {{-0.01, 0.0}, {3.0, 0.0}, {3.0, 3.0}, {6.0, 3.0}, {6.0, -3.0}};
    PurePursuit pp(target_coordinates, 5, 0.5);

    while (true)
    {
        double x, y, theta;
        cin >> x >> y >> theta;
        cout << pp.compute_angerr(x, y, theta) << endl;
        if (pp.get_finish_flag()) break;
    }

    cout << pp.calc_angle({0.0, 0.0}, {1.0, 0.0}, {0.0, 1.0}) << endl;
    cout << pp.calc_angle({0.0, 0.0}, {1.0, 0.0}, {1.0, 1.0}) << endl;
    cout << pp.calc_angle({6.0, -2.95}, {6.0, 3.0}, {6.0, -3.0}) << endl;
    cout << endl;

    cout << pp.is_inside({6, -2.95}, 3) << endl;
    cout << pp.is_inside({-0.1, -0.1}, 0) << endl;
    cout << endl;

    point intersection;
    cout << pp.perpendicular_dist({6, -2.95}, 3, intersection) << endl;
    cout << intersection.x << " " << intersection.y << endl;
    cout << pp.perpendicular_dist({-0.1, -0.1}, 0, intersection) << endl;
    cout << intersection.x << " " << intersection.y << endl;

    return 0;
}