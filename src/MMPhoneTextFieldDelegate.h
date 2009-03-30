/*
 *  MMPhoneTextFieldDelegate.h
 *  MiuMiu
 *
 *  Created by Peter Zion on 23/10/08.
 *  Copyright 2008 Peter Zion. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>

@class MMPhoneTextField;

@protocol MMPhoneTextFieldDelegate <NSObject>

@optional

-(void) textFieldDidChange:(MMPhoneTextField *)textField;

@end
