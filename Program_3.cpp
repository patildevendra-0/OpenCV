#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
    VideoCapture cap("test_video.mp4");
    if(!cap.isOpened())
    {
        cout<<"error";
        return -1;
    }

    while (true)
    {
        Mat frame;
        cap >> frame;
        if(frame.empty())
        {
            cout<<"error";
            return -1;
        }
        imshow("demo",frame);
        
        if(waitKey(30)==27)
        {
            break;
        }
    }

    cap.release();

    return 0;
}