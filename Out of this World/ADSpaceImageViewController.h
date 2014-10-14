//
//  ADSpaceImageViewController.h
//  Out of this World
//
//  Created by Arturo Dodd Vaudrecourt on 5/24/14.
//  Copyright (c) 2014 Dodd.mx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADSpaceObject.h"

@interface ADSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) ADSpaceObject *spaceObject;

@end
