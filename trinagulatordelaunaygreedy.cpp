#include "trinagulatordelaunaygreedy.h"
#include "geometrystrutctures.h"

static constexpr size_t trianglePointsCount = 3;

std::list<Triangle> TrinagulatorDelaunayGreedy::triangulatePointCloud(std::list<Point3D> points)
{
    if (points.size() < trianglePointCount)
    {
        std::cout << "The count of points is not enough for triangulation" << std::endl;
        return std::list<Triangle>();
    }

    std::list<Triangle> result;

    return std::list<Triangle>();
}
