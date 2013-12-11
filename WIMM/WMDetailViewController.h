//
//  WMDetailViewController.h
//  WIMM
//
//  Created by Andrey Pachay on 12/11/13.
//  Copyright (c) 2013 Andrey Pachay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WMDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
