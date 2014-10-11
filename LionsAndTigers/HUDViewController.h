//
//  HUDViewController.h
//  LionsAndTigers
//
//  Created by MIKE LAND on 10/9/14.
//  Copyright (c) 2014 MIKE LAND. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HUDDelegate

@end

@interface HUDViewController : UIViewController

-(void)tigersButtonTapped;
-(void)lionsButtonTapped;

@property id <HUDDelegate> delegate;


@end
