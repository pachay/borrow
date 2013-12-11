//
//  WMMasterViewController.h
//  WIMM
//
//  Created by Andrey Pachay on 12/11/13.
//  Copyright (c) 2013 Andrey Pachay. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface WMMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
