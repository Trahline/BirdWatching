//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by TIMOTHY AHLINE on 1/24/13.
//  Copyright (c) 2013 TIMOTHY AHLINE. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

- (NSUInteger)countOfList;

- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;

- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
