cmake_minimum_required(VERSION 3.5)

project(DokanOnlineMarket VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        HomeGui.cpp HomeGui.h HomeGui.ui
        Seller.cpp Seller.h
        Product.h Product.cpp
        Cart.h Cart.cpp
        Customer.h Customer.cpp
        Controller.h Controller.cpp
        Resources.qrc
        ProductGuiWidget.h ProductGuiWidget.cpp ProductGuiWidget.ui
        Model.h Model.cpp
        CategoryGuiWidget.h CategoryGuiWidget.cpp CategoryGuiWidget.ui
        ProductGuiWidget_2.h ProductGuiWidget_2.cpp ProductGuiWidget_2.ui
        WalletGuiWidget.h WalletGuiWidget.cpp WalletGuiWidget.ui
        SellerSearchGui.h SellerSearchGui.cpp SellerSearchGui.ui
        ProductInSearchGuiWidget.h ProductInSearchGuiWidget.cpp ProductInSearchGuiWidget.ui
        ErrorPage.h ErrorPage.cpp ErrorPage.ui
        DoneShoppingGui.h DoneShoppingGui.cpp DoneShoppingGui.ui
        TermsAndConditions.h TermsAndConditions.cpp TermsAndConditions.ui
        ContactToUsGui.h ContactToUsGui.cpp ContactToUsGui.ui
        UserGuiWidget.h UserGuiWidget.cpp UserGuiWidget.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(DokanOnlineMarket
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET DokanOnlineMarket APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(DokanOnlineMarket SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(DokanOnlineMarket
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(DokanOnlineMarket PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(DokanOnlineMarket PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(DokanOnlineMarket)
endif()
