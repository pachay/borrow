//
//  WMAppDelegate.h
//  WIMM
//
//  Created by Andrey Pachay on 12/11/13.
//  Copyright (c) 2013 Andrey Pachay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WMAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
