//
//  ViewController.h
//  Alcolator
//
//  Created by Tyler Hall on 12/10/15.
//  Copyright © 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercenttextField;

@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;

@property (weak, nonatomic) IBOutlet UILabel *resultLabe;

- (void)buttonPressed:(UIButton *)sender;

@end

