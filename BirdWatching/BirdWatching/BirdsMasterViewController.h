//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by TIMOTHY AHLINE on 1/22/13.
//  Copyright (c) 2013 TIMOTHY AHLINE. All rights reserved.
//

#import <UIKit/UIKit.h>



@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

- (IBAction)done:(UIStoryboardSegue *)segue;
- (IBAction)cancel:(UIStoryboardSegue *)segue;

@end
