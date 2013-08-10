//
//  FriendsViewController.h
//  Reddit
//
//  Created by Christer Nordbø on 10.08.13.
//  Copyright (c) 2013 Christer Nordbø. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsViewController : UITableViewController

@property (nonatomic,strong) PFRelation *friendsRelation;
@property (nonatomic,strong) NSMutableArray *friends;

@end
