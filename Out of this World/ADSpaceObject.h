//
//  ADSpaceObject.h
//  Out of this World
//
//  Created by Arturo Dodd Vaudrecourt on 5/22/14.
//  Copyright (c) 2014 Dodd.mx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ADSpaceObject : NSObject

@property (strong, nonatomic) NSString *name;
@property (nonatomic) float gravitationalForce;
@property (nonatomic) float diameter;
@property (nonatomic) float yearLength;
@property (nonatomic) float dayLength;
@property (nonatomic) float temperature;
@property (nonatomic) int numberOfMoons;
@property (strong, nonatomic) NSString *nickname;
@property (strong, nonatomic) NSString *interestFact;

@property (strong, nonatomic) UIImage *spaceImage;

-(id)initWithData:(NSDictionary *)data andImage:(UIImage *)image;

@end
