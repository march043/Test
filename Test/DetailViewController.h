//
//  DetailViewController.h
//  Test
//
//  Created by seongmoo on 2014. 12. 30..
//  Copyright (c) 2014년 seongmoo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

