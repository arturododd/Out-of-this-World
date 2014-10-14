//
//  ADAddSpaceObjectViewController.h
//  Out of this World
//
//  Created by Arturo Dodd Vaudrecourt on 10/14/14.
//  Copyright (c) 2014 Dodd.mx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADSpaceObject.h"

@protocol ADAddSpaceObjectViewControllerDelegate <NSObject>

@required

-(void)addSpaceObject:(ADSpaceObject *)spaceObject;
-(void)didCancel;

@end

@interface ADAddSpaceObjectViewController : UIViewController

@property (weak, nonatomic) id <ADAddSpaceObjectViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diameterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberofmoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *interestingfactTextField;

- (IBAction)cancelButtonPressed:(UIButton *)sender;
- (IBAction)addButtonPressed:(UIButton *)sender;






@end
