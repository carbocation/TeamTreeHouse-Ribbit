//
//  EditFriendsViewController.h
//  Reddit
//
//  Created by Christer Nordbø on 10.08.13.
//  Copyright (c) 2013 Christer Nordbø. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFriendsViewController : UITableViewController
@property (nonatomic,strong) NSArray *allUsers;
@property (nonatomic,strong) PFUser *currentUser;
@property (nonatomic,strong) NSMutableArray *friends;

-(BOOL)isFriend:(PFUser*)user;
@end
