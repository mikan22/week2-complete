//
//  TMViewController.h
//  Temperatures
//
//  Created by Michele Titolo on 1/24/13.
//  Copyright (c) 2013 Michele Titolo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TMViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (weak, nonatomic) IBOutlet UILabel *outputLabel;
@property (weak, nonatomic) IBOutlet UISegmentedControl *convertSegControl;
- (IBAction)goPressed:(id)sender;

@end
