package com.apps.duckalert;

public interface SystemUIChangeRecipient
{
	public SystemUIChangeRecipient GetSystemUIChangeCallback();
	public void SystemUIChangeOccured();
}
