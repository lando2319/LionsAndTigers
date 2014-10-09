//
//  TopViewController.h
//  LionsAndTigers
//
//  Created by MIKE LAND on 10/9/14.
//  Copyright (c) 2014 MIKE LAND. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TopDelegate

-(void) topRevealButtonTapped;

@end


@interface TopViewController : UIViewController


@property id <TopDelegate> delegate;


@end

