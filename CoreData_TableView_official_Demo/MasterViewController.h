//
//  MasterViewController.h
//  CoreData_TableView_official_Demo
//
//  Created by 曹 盛杰 on 13-5-13.
//  Copyright (c) 2013年 曹 盛杰. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
