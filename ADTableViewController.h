//
//  ADTableViewController.h
//  Out of this World
//
//  Created by Arturo Dodd Vaudrecourt on 5/20/14.
//  Copyright (c) 2014 Dodd.mx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADAddSpaceObjectViewController.h"

@interface ADTableViewController : UITableViewController <ADAddSpaceObjectViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;

@end
