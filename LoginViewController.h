//
//  LoginViewController.h
//  Reddit
//
//  Created by Christer Nordbø on 10.08.13.
//  Copyright (c) 2013 Christer Nordbø. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)login:(id)sender;

@end
