#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
	Mat image = Mat::zeros(100, 100, CV_8UC3);
	Mat img = imread("img.jpg", 1);
	int count = 0;
	while (count<=3)
	{
		imshow("", image);
		waitKey(0);
		imshow("", img);
		waitKey(0);
		count++;
	}
	return 0;
}