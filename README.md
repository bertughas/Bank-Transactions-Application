<h1>Bank Transactions Application</h1>

<h2>Overview</h2>
<p>This program simulates a basic banking application where users can perform various transactions such as withdrawing money, depositing money, paying bills, and making transfers.</p>

<h2>Features</h2>
<ul>
    <li><strong>Withdraw Money:</strong>
        <ul>
            <li>Users can withdraw money from their account.</li>
            <li>If the account balance is sufficient, the transaction is processed successfully.</li>
            <li>Otherwise, an error message is displayed indicating insufficient funds.</li>
        </ul>
    </li>
    <li><strong>Deposit Money:</strong>
        <ul>
            <li>Users can deposit money into their account.</li>
            <li>The deposited amount is added to the account balance.</li>
            <li>The transaction is processed successfully.</li>
        </ul>
    </li>
    <li><strong>Pay Bill:</strong>
        <ul>
            <li>Users can pay bills such as electricity, water, natural gas, or phone bills.</li>
            <li>Users select the type of bill they want to pay and enter their account number.</li>
            <li>If the account balance is sufficient, the bill payment is processed successfully.</li>
            <li>Otherwise, an error message is displayed indicating insufficient funds.</li>
        </ul>
    </li>
    <li><strong>Transfer:</strong>
        <ul>
            <li>Users can transfer money to another account.</li>
            <li>Users enter the recipient's IBAN (International Bank Account Number) and the amount to transfer.</li>
            <li>If the account balance is sufficient, the transfer is processed successfully.</li>
            <li>Otherwise, an error message is displayed indicating insufficient funds.</li>
        </ul>
    </li>
</ul>

<h2>Implementation</h2>
<ul>
    <li>The program is implemented in C programming language.</li>
    <li>It utilizes basic input/output functions for user interaction.</li>
    <li>Random number generation is used to simulate bill amounts and initial account balances.</li>
    <li>Error handling is implemented to handle invalid user inputs and insufficient funds scenarios.</li>
</ul>

<h2>Usage</h2>
<ul>
    <li>Upon running the program, users are presented with a menu of banking options.</li>
    <li>Users select the desired transaction by entering the corresponding option number.</li>
    <li>Users input necessary information such as withdrawal/deposit amounts, bill types, or recipient's IBAN.</li>
    <li>The program processes the transaction and displays appropriate messages indicating the outcome.</li>
    <li>Users can perform multiple transactions sequentially or exit the program when finished.</li>
</ul>

<h2>Note</h2>
<ul>
    <li>This application is a simple simulation for educational purposes and does not interact with real banking systems or accounts.</li>
    <li>It serves as a demonstration of basic programming concepts such as conditional statements, loops, functions, and user input/output in C.</li>
</ul>
