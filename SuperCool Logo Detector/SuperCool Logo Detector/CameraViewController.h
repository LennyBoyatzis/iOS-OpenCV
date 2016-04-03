//
//  ViewController.h
//  SuperCool Logo Detector
//
//  Created by Leo Boyatzis on 3/04/2016.
//  Copyright © 2016 Leo Boyatzis. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <opencv2/highgui/highgui.hpp>

@interface CameraViewController : UIViewController < CvVideoCameraDelegate >

@property (weak, nonatomic) IBOutlet UIImageView *img;
@property (weak, nonatomic) IBOutlet UIButton *btn;

@end

