//
//  ADSpaceDataViewController.h
//  Out of this World
//
//  Created by Arturo Dodd Vaudrecourt on 10/3/14.
//  Copyright (c) 2014 Dodd.mx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADSpaceObject.h"

@interface ADSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@property (strong, nonatomic) ADSpaceObject *spaceObject;

@end
