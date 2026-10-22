#include "armor_detector.h"

#include <opencv2/opencv.hpp>

// 装甲板检测示例代码（练习用，不追求真的跑通，重点是拿它练 Git）
// 注意下面这行 threshold：教程讲合并冲突时用的就是它，练习 6 我们会亲手改它
float threshold = 180.0;

namespace rm_auto_aim {

cv::Mat ArmorDetector::preprocess(const cv::Mat& img) {
    cv::Mat gray, binary;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);
    cv::threshold(gray, binary, threshold, 255, cv::THRESH_BINARY);
    return binary;
}

}  // namespace rm_auto_aim
