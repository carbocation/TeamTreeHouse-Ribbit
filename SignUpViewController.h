//
//  SignUpViewController.h
//  Reddit
//
//  Created by Christer Nordbø on 10.08.13.
//  Copyright (c) 2013 Christer Nordbø. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignUpViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;

- (IBAction)signup:(id)sender;

@end
