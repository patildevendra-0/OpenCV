#include<opencv4/opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{

    Mat image = imread("test.jpg");
    if(image.empty())
    {
        cout<<"error";
    }

    imshow("namedWindow",image);

    waitKey(0);
    destroyAllWindows();

    return 0;
}