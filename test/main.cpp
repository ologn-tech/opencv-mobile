#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat bgr = cv::imread("in.jpg", 1);

    cv::resize(bgr, bgr, cv::Size(200, 200));

    cv::imwrite("out.jpg", bgr);

    return 0;
}
