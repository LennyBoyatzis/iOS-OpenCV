//
//  GeometryUtil.h
//  SuperCool Logo Detector
//
//  Created by Leo Boyatzis on 3/04/2016.
//  Copyright © 2016 Leo Boyatzis. All rights reserved.
//


#import <Foundation/Foundation.h>

/*
 This static class provides perspective transformation function
 */
@interface GeometryUtil : NSObject

/*
 Return perspective transformation matrix for given points to square with
 origin [0,0] and with size (size.width, size.width)
 */
+ (cv::Mat) getPerspectiveMatrix: (cv::Point2f[]) points toSize: (cv::Size2f) size;

/*
 Returns new perspecivly transformed image with given size
 */
+ (cv::Mat) normalizeImage: (cv::Mat *) image withTranformationMatrix: (cv::Mat *) M withSize: (float) size;

@end
