//
//  DetailViewController.h
//  CoreData_TableView_official_Demo
//
//  Created by 曹 盛杰 on 13-5-13.
//  Copyright (c) 2013年 曹 盛杰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
