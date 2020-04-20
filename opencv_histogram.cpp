
    cv::Mat canvas = cv::Mat::zeros(600, 300, CV_8U);
    int i = 0;
    for (auto &bin: m_histogram) {
        int binWidth = 300 / m_binsNumber;
        size_t v = bin;
        cv::rectangle(canvas, cv::Point(i * binWidth, 600 - v), cv::Point((i + 1) * binWidth, 600), cv::Scalar(255));
        i++;
    }
    int histIdx = (intptr_t)(this);
    cv::imshow("hist" + std::to_string(histIdx), canvas);
