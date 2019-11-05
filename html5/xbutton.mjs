
class XButton extends HTMLElement{
    constructor(){
        super();

        const shadow = this.attachShadow({mode: 'open'});

        const wrapper = document.createElement('button');
        wrapper.setAttribute('class', 'testButton');

        const text = this.getAttribute('data-text');
        console.log(this);
        console.log(text);
        console.log("check:" + this.hasAttribute('data-text'));
        if(text)
            wrapper.textContent = text;
        else
            wrapper.textContent = "Test";
        
        const style = document.createElement('style');
        console.log(style.isConnected);

        style.textContent = `
        .testButton{
            width: 200px;
            height: 50px;
            background-color: blue;
            font-size: 20px;
            color: white;
        }
        .testButton: hover{
            background-color: red;
        }
        `;

        shadow.appendChild(style);
        console.log(style.isConnected);
        shadow.appendChild(wrapper);
        
    }
}

customElements.define('x-button', XButton);